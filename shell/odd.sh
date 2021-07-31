i=0
while read line
do 
if [ `expr $i % 2` -eq 0 ]
then 
echo "$line"
fi
if [ `expr $i % 2` -eq 1 ]
then
export i
./even.sh
fi
i=$((i+1))
done < file1.txt
