#!/bin/bash

# Путь к файлу, в который будет записываться время
LOGFILE="log.txt"

# Запись текущей даты и времени в файл
echo "Текущая дата и время: $(date)" >> "$LOGFILE"