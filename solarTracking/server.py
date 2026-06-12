from flask import Flask

app = Flask(__name__)

@app.route("/")
def home():
    return "<h1>Solar Tracking Cloth Dryer</h1>"

@app.route("/rain")
def rain():
    return "<h1>Rain Detected! Please Collect the Clothes.</h1>"

app.run(host="0.0.0.0", port=5000)