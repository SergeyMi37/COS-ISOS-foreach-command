ROUTINE ZZFOREACH [Type=INC]
##; run $order() ascending or descending on global or local arrays 
##; pass semicolon separated parameter string ("%array;%do;%fwd,;%key")
##; %array = global or local variable name ; REQUIRED
##; %do = routine or method to be executed for each run ; REQUIRED
##; %fwd = 1/-1 loop direction ascending / descending, default = 1  ; OPTIONAL
##; %key = first key if existing ; OPTIONAL
ZZFOREACH(%par) public {
	set %par=$lfs(%par,";")
	new %array,%do,%fwd,%key,%val
	set %array=$lg(%par,1),%do=$lg(%par,2),%fwd=$lg(%par,3,1),%key=$lg(%par,4)
	if '%fwd set %fwd=1
	if %key]"" set %key=$o(@%array@(%key),-1*%fwd)
	for  set %key=$o(@%array@(%key),%fwd,%val) quit:%key=""  do @%do
	quit 1  
	}
