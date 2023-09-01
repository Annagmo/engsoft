

# teste do caminho básico:


```

Etapas: (do slide)
Construir o grafo de programa : ok
Determinar a complexidade ciclomática : ok
Determinar o conjunto de caminhos independentes: 3
Preparar casos de teste que vão exercitar cada: -???



```
## flow do gráfico só que texto:
```

1a bola:  Início
2a bola: Verificar se o valor inicial é par
                /          
3a bola: O valor inicial é par
4a bola: Iniciar soma
              5a bola: loop while verifica se valor inicial ultrapasse o valor final 
                      /                                                          \          
6a bola: Verificar se o valor inicial ultrapassou o valor final (6.1).           9a bola: retorna valor da soma
7:  Se não ultrapassou, adicionar o valor inicial à soma.
8: Incrementar o valor inicial em 2 para obter o próximo número par.
volta pra 5a bola



outro caminho: 

2 : verifica se o valor é par
                       \
                 10 bola: O valor inicial é ímpar           
                 11a bola: incrementa para o proximo nr par          
                  entra na bola de inicia a soma
                    mesmo resto

```

## Gráfico de fluxo/controle:

![grafoFluxo](https://github.com/Annagmo/engsoft/assets/85114312/5c23e734-e4d2-4ba2-bc25-d66db8d38b65)


https://app.creately.com/d/t2kRYfQYQIV/edit

## Caminhos independentes:
```
Caminho 1: 1-2-11-12
caminho 2: 3-4-5-9
caminho 3: 5-6-7-8
```
## Complexidade:

![1](https://github.com/Annagmo/engsoft/assets/85114312/f8166c04-7b63-4007-83f9-f592e284a537)
