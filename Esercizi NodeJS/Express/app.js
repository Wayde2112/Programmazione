import express from "express";

const port = 5050

const app = express()

app.get('/', function (req, res) {
    console.log("Ciao Ste!")
  res.send('Sei nella pagina!')
})

app.get('/test', (request, response) => {
    response
        .status(200) 
        .json({
            'data': 'Valore',
            'status': 'Ok',
            'value': 1,
        })
})

app.all('*', (reqeust, response) => {
    console.error("Sei in una risorsa non disponibile")
    response
        .status(500) 
        .json({
            'success': false,
            'code': 1001,
            'message': "Risorsa non disponibile"            
        })
})
/* 
app.delete()
app.post()
app.put()
app.patch()
*/
app.listen(port)