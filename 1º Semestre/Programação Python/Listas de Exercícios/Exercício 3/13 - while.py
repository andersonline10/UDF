""" 13. Elabore um algoritmo que leia um número de entrada que indicará a quantidade de
registros a serem lidos (N). Em seguida algoritmo deve solicitar o sexo (M/F) e idade de N
pessoas e ao final apresentar a média de idade de ambos os gêneros catalogados"""

contador = 1
soma_idade_masc = 0
soma_idade_fem = 0
soma_sexo_masc = 0
soma_sexo_fem = 0

qtdade = int(input("Informe a quantidade de pessoas: "))

while contador <= qtdade:
    sexo = int(input(f"Informe o sexo da {contador}a pessoa (1-masculino ou 2-feminino: "))
    idade = int(input(f"Informe a idade da {contador}a pessoa: "))
    contador += 1

    if sexo == 1:
        soma_idade_masc = soma_idade_masc + idade
        soma_sexo_masc = soma_sexo_masc + sexo
    else:
        soma_idade_fem = soma_idade_fem + idade
        soma_sexo_fem = soma_sexo_fem + sexo/2

print(f"\nA média da idade de pessoas do sexo masculino é de {soma_idade_masc/soma_sexo_masc}")
print(f"A média da idade de pessoas do sexo feminino é de {soma_idade_fem/soma_sexo_fem}")
