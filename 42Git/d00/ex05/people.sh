ldapsearch "uid=z*" | grep ^cn: | sort -fr | cut -d : -f 2 | cut -c 2-
