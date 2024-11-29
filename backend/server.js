const express = require('express');
const bodyParser = require('body-parser');
const { spawn } = require('child_process');

const app = express();
app.use(bodyParser.json());

const runCProgram = (command) => {
    return new Promise((resolve, reject) => {
        const process = spawn('./main', [], { stdio: ['pipe', 'pipe', 'inherit'] });
        let output = '';

        process.stdout.on('data', (data) => {
            output += data.toString();
        });

        process.on('close', (code) => {
            if (code === 0) {
                resolve(output.trim());
            } else {
                reject(new Error('C program exited with code ' + code));
            }
        });

        process.stdin.write(command + '\n');
        process.stdin.end();
    });
};

// Endpoint para listar produtos
app.get('/products', async (req, res) => {
    try {
        const result = await runCProgram('list');
        res.send(result.split('\n'));
    } catch (err) {
        res.status(500).send(err.message);
    }
});

// Endpoint para adicionar produto
app.post('/products', async (req, res) => {
    const { id, nome, preco, quantidade } = req.body;
    const command = `add ${id} ${nome} ${preco} ${quantidade}`;
    try {
        const result = await runCProgram(command);
        res.send(result);
    } catch (err) {
        res.status(500).send(err.message);
    }
});

// Endpoint para editar produto
app.put('/products/:id', async (req, res) => {
    const { id } = req.params;
    try {
        const result = await runCProgram(`edit ${id}`);
        res.send(result);
    } catch (err) {
        res.status(500).send(err.message);
    }
});

// Endpoint para remover produto
app.delete('/products/:id', async (req, res) => {
    const { id } = req.params;
    try {
        const result = await runCProgram(`remove ${id}`);
        res.send(result);
    } catch (err) {
        res.status(500).send(err.message);
    }
});

// Inicia o servidor
const PORT = 3000;
app.listen(PORT, () => {
    console.log(`Servidor rodando na porta ${PORT}`);
});
