#include <iostream>
#include <limits>

void mostrarMenu() {
    std::cout << "\n--- Calculadora C++ ---" << std::endl;
    std::cout << "1. Soma (+)" << std::endl;
    std::cout << "2. Subtracao (-)" << std::endl;
    std::cout << "3. Multiplicacao (*)" << std::endl;
    std::cout << "4. Divisao (/)" << std::endl;
    std::cout << "5. Sair" << std::endl;
    std::cout << "Escolha uma opcao: ";
}

int main() {
    double num1, num2;
    int opcao;

    while (true) {
        mostrarMenu();
        if (!(std::cin >> opcao)) {
            std::cout << "Entrada invalida!" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }
        if (opcao == 5) break;
        if (opcao < 1 || opcao > 5) continue;

        std::cout << "Digite o primeiro numero: "; std::cin >> num1;
        std::cout << "Digite o segundo numero: "; std::cin >> num2;

        switch (opcao) {
            case 1: std::cout << "Resultado: " << (num1 + num2) << std::endl; break;
            case 2: std::cout << "Resultado: " << (num1 - num2) << std::endl; break;
            case 3: std::cout << "Resultado: " << (num1 * num2) << std::endl; break;
            case 4: 
                if (num2 != 0) std::cout << "Resultado: " << (num1 / num2) << std::endl;
                else std::cout << "Erro: Divisao por zero!" << std::endl;
                break;
        }
    }
    return 0;
}
