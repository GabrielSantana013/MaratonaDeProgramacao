#!/bin/bash

# Defina a mensagem de commit
COMMIT_MESSAGE="Exercícios Concluídos"

# Adiciona todos os arquivos ao staging
git add .

# Faz o commit com a mensagem pré-definida
git commit -m "$COMMIT_MESSAGE"

# Empurra para o repositório remoto (opcional)
git push origin main