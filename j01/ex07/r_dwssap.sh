cat /etc/passwd | sed 's/#//' | cut -d: -f 1 | sed -n 'n;p' | rev | sort -rf | sed -n '8,16p'| tr -d '\n'
