# AllCracker #
## Compilación: ## 
`gcc cracker.c -o cracker -lm`
## Uso ##
`./cracker hash diccionario algoritmo`
## Ejemplo ##
```
./cracker 48bb6e862e54f2a795ffc4e541caed4d /usr/share/wordlists/rockyou.txt MD5
Hash Cracked!: 48bb6e862e54f2a795ffc4e541caed4d = easy
```
## Lista de Algoritmos Compatibles ##
```
MD5
SHA256
```
