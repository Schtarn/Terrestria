import uvicorn
from fastapi import FastAPI

app = FastAPI()


@app.get("/")
async def root():
    return {"message": "Hello World"}


def run_server(host, port):
    uvicorn.run(app, host=host, port=port)
