string="hello world"

function string_test(){

	local string="hello local@@"
	echo ${string}
}

string_test 
echo ${string}

#unset string 
unset string
