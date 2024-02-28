FROM ubuntu:22.04
LABEL Description="Build Environmento"

ENV HOME /root
SHELL ["/bin/bash", "-c"]

RUN apt-get update && apt-get -y --no-install-recommends install \
    build-essential \
    clang \
    cmake \
    gdb \
    wget