# 6.	Escreva um programa que solicite ao usuário a temperatura em graus Celsius e ao final
# apresente a temperatura correspondente em graus Farenheit. F = Celsius * 1.8 + 32

temp_celcius = float(input("Informe a temperatura em graus Celcius: "))

temp_fahrenheit = (temp_celcius * 1.8) + 32

print("A temperatura correspondente em graus Farenheit é %.2f" %temp_fahrenheit, end=".")