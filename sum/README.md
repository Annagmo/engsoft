

# teste do caminho básico:


```

Etapas: (do slide)
Construir o grafo de programa : ok
Determinar a complexidade ciclomática : -??
Determinar o conjunto de caminhos independentes: 2
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

![grafoFluxo](https://github.com/Annagmo/engsoft/assets/85114312/a5eb8ad2-ae81-43cb-bbd7-f0209daaa7ad)


## Caminhos independentes:
```
Caminho 1: 1-2-3-4-5-6-7-8-9
caminho 2: 1-2-11-12-3-4-5-6-7-8-9
```
