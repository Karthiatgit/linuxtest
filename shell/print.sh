i=0
while read line
do
 if [ `expr $i % 2` -eq 0 ]
 then
  echo "$line"
  fi
  i=$((i+1))
  done <file.txt