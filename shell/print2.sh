
	
i=0
 while read line
 do 

    if [ `expr $i % 2` -eq 1 ]
    then
         export line
        ./print1.sh "$line"
    else
        echo $line
     fi
    i=`expr $i + 1`
  done <file.txt
