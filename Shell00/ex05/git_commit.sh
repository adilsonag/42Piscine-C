#!/bin/bash

# Comando para obter os últimos 5 commits
git log -5 --pretty=format:"%H"

# Adiciona uma quebra de linha no final
echo
