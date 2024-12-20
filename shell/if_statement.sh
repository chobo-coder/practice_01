num1=35
num2=48

if(( ${num1} < ${num2})); then
	echo "yes"
fi

if (( ($num1 * $num2) - $num2 > 200)) ; then
	echo "<200"
else
	echo "<200"
fi
