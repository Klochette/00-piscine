find . -name "*.sh" | rev | cut -d/ -f 1 | rev | sed "s/\.sh//g"
