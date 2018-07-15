touch -A -01 -a ./bomb.txt | stat -x ./bomb.txt | grep Access | rev | awk '{print $2}' | rev
