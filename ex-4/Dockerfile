FROM gcc:4.9
RUN apt-get update -y
RUN apt-get install git
RUN apt-get install tar
RUN apt update && apt install telnet
#RUN apt-get update && apt-get install curl
RUN mkdir -p /gcc
WORKDIR /gcc
RUN cd  ${WORKDIR}
EXPOSE 8080
CMD ["/bin/bash"]