FROM debian:buster-slim
RUN apt-get update -y
RUN apt-get install nodejs -y
RUN apt-get install npm -y
# ENV MONGO_DB_USERNAME=root \
#     MONGO_DB_PWD=1234

RUN mkdir -p /code/app
WORKDIR /code/app
COPY ./app ${WORKDIR}
RUN cd  ${WORKDIR}

RUN npm  install
EXPOSE 3000/tcp

CMD ["node", "server.js"]
