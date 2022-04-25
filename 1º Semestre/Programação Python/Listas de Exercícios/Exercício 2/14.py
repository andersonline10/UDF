# Escreva um programa em linguagem C que solicite ao usuário a média para aprovação
# em um curso e em seguida solicite ao usuário o nome, sexo e as 03 notas do aluno e ao
# final imprima a frase: "O aluno XXXXX foi aprovado com media YY" considerando o gênero
# do(a) aluno(a) e se foi aprovado(a) ou reprovado(a)

media_aprov = float(input("Digite a média para aprovação: "))

nome = str(input("Digite o nome do aluno(a)(e): "))
genero = int(input(f"Digite o gênero de {nome}. Digite 1 para masculino, 2 para feminino ou 3 para outros: "))
nota1 = float(input("Digite a nota da prova 1: "))
nota2 = float(input("Digite a nota da prova 1: "))
nota3 = float(input("Digite a nota da prova 1: "))

if (((nota1+nota2+nota3)/3 > media_aprov) and genero == 1):
    print(f"{nome} foi aprovado com a média {(nota1+nota2+nota3)/3:0.2f}.")
elif (((nota1+nota2+nota3)/3 < media_aprov) and genero == 1):
    print(f"{nome} foi reprovado com a média {(nota1+nota2+nota3)/3:0.2f}.")
elif (((nota1+nota2+nota3)/3 > media_aprov) and genero == 2):
    print(f"{nome} foi aprovada com a média {(nota1+nota2+nota3)/3:0.2f}.")
elif (((nota1+nota2+nota3)/3 < media_aprov) and genero == 2):
    print(f"{nome} foi reprovada com a média {(nota1+nota2+nota3)/3:0.2f}.")
elif (((nota1+nota2+nota3)/3 > media_aprov) and genero == 3):
    print(f"{nome} foi aprovade com a média {(nota1+nota2+nota3)/3:0.2f}.")
else:
    print(f"{nome} foi reprovade com a média {(nota1+nota2+nota3)/3:0.2f}.")



