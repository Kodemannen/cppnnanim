
eval "$(conda shell.zsh hook)"
conda activate $HOME/miniconda3/envs/snakemake
# conda activate $HOME/miniconda3/envs/cppnnanim

snakemake -c1

./Neuron
cat .logerr/_stderr.err

