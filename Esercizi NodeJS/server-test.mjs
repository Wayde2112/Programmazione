import * as http from "http";

let port = 4040;

const serverOne = http.createServer(
    (request, response) => {
        response.write('Server attivo');
        response.end();
    }
);

serverOne.listen(port);

port = 5050;

const server = http.createServer(
    (request, response) => {
        //response.write('Server attivo');

        if (request.url === '/') {
            response.end('Sei nella home')
        }

        if (request.url === '/notes') {
            response.end(' >> Pagina delle note <<')
        }

        if (request.url === '/about') {
            response.end(' >> Pagina about <<')
        }

    }
);

server.listen(port);