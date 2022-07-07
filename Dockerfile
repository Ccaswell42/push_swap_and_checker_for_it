FROM alpine

# RUN mkdir /src/app
COPY . /src/app/

RUN apk upgrade 
RUN apk add build-base
RUN apk add make
# RUN yum update Makefile

WORKDIR /src/app/
RUN make all