from flask import Flask
from flask import request
from flask import jsonify

app=Flask(__name__)

data={

"ldr_left":0,
"ldr_right":0,
"rain":0,
"motor":"STOP"

}

@app.route("/")

def home():

    return data

@app.route(
"/data",
methods=["POST"]
)

def receive():

    global data

    data=request.get_json()

    print(data)

    return jsonify(
    {
    "status":"stored"
    })

app.run(
host="0.0.0.0",
port=5000
)