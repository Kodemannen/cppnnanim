rule all:
    input: "src/main.cpp"
    output: "circle"
    shell: "g++ -o circle src/main.cpp -Iinclude -lsfml-graphics -lsfml-window -lsfml-system"
