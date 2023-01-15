rule all:
    input: 
        "src/main.cpp",
        "src/Neuron.cpp",
        "include/Neuron.hpp",
        "src/NetworkOfNeurons.cpp",
        "include/NetworkOfNeurons.hpp"

    output: "Neuron"
    log: 
        out = ".logerr/_stdout.log",
        err = ".logerr/_stderr.err"
    shell: "g++ -o {output} {input} -Iinclude -lsfml-graphics -lsfml-window -lsfml-system 2> {log.err} 1> {log.out}"


