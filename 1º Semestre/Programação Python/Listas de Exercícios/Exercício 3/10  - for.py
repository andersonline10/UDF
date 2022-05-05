"""10. Elabore um algoritmo que solicite ao usuário uma palavra e um número inteiro que
indicará a quantidade de vezes que a palavra digitada será impressa na tela, um em cada
linha."""

contador = 1
palavra = str(input("Informe uma palavra: "))
numero = int(input("Informe um número inteiro: "))

for numero in range(contador, numero + 1):
    print(f"{contador} - {palavra}")
    contador += 1
