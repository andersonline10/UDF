""" Ex. 10 O sistema de avaliação de determinada disciplina é composto por três provas. A primeira
 prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. Considerando que a
 média para aprovação é 6.0, faça um algoritmo para calcular a média final de um aluno
 desta disciplina e dizer se o aluno foi aprovado ou não """

nota1 = float(input("Digite a primeira nota: "))
nota2 = float(input("Digite a segunda nota: "))
nota3 = float(input("Digite a terceira nota: "))

if (nota1*2 + nota2*3 + nota3*5)/3 > 6:
    print(f"O aluno foi aprovado com a média {((nota1*2 + nota2*3 + nota3*5)/3):.2f}.")
else:
    print(f"Média: {((nota1*2 + nota2*3 + nota3*5)/3):.2f}.\nO aluno foi reprovado.")
