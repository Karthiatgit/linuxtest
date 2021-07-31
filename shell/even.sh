j=0
while read line
do
if [ $i -eq $j ] 
then
echo "$line"
break
fi
j=$((j+1))
done <file1.txt
