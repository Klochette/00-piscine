ldapsearch -xLLL uid='z*' cn | grep cn | sort -rf | sed 's/cn: //'
