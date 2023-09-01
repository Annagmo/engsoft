

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
1: declara as variáveis e recebe input, goto2
2: if inicio == par goto3 else goto6
3: if inicio <= fim goto4 else goto5
4: adiciona o valor de inicio ao resultado da soma e incrementa a a posição inicio em 2 (próximo par), goto3
5: retorna o valor da soma, end
6: incrementa o valor de inicio em 1 (próximo par), goto3
```

## Gráfico de fluxo/controle:

![grafoFluxo](https://github.com/Annagmo/engsoft/assets/80477294/c9350bea-e989-4838-88b4-0cc370d37ae4)

## Complexidade ciclomática:
```
V(G) = arestas - nodos + 2
V(G) =  7 - 6 + 2 = 3
```

## Caminhos independentes:
```
Caminhos independentes
1, 2, 6, 3 ...
... 3, 4, ...
... 3, 5
```

## Casos de teste:
```
Caso de teste 1: começar por impar ( ter ou n par n faz diferença )
Dados de teste 1: (1, 5)

Caso de teste 2: ter 1 par no intervalo
Dados de teste 2: (2, 2)

Caso de teste 3: começar por par e ter mais de 1 par no intervalo
Dados de teste 3: (12, 17)
```
