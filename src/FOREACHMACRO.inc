ROUTINE FOREACHMACRO [Type=INC]
##;FOREACHMACRO ;  macro definitions
##; %key = variable provide to loop trough array
##; %arr = the gobal or local array to be looped on
##; %the method or routine to be executed for each node.
##; $$$foreach = forward loop  $$$foreeachR = reverse loop
##; example1: $$$foreach(anykey,^rcc,##class(my).show($zr))
##; example2: $$$foreachR(akey,local(3),work^someroutine(akey)
##;
#define foreach(%key,%arr,%do) set %key="" for  set %key=$o(%arr(%key)) q:%key=""  do %do
#define foreachR(%key,%arr,%do) set %key="" for  set %key=$o(%arr(%key),-1) q:%key=""  do %do
