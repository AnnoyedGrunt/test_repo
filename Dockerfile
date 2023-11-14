FROM alpine
COPY main.c .
RUN apk update
RUN apk add build-base
RUN gcc main.c -o exec
CMD ["./exec"]