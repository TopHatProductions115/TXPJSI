<script>

function TXPJSI(operation, object)
{
var send = document.createElement("form");
send.setAttribite('name',"TXPJSI");
send.setAttribite('method',"post");
send.setAttribite('action',"TXPJSI.cgi");

var input = document.createElement("input");
input.setAttribute("type", "hidden");
input.setAttribute("name", "object");
input.setAttribute("value", object);

var input2 = document.createElement("input");
input2.setAttribute("type", "hidden");
input2.setAttribute("name", "operation");
input2.setAttribute("value", operation);

var s = document.createElement("input"); //input element, Submit button
s.setAttribute('type',"submit");
s.setAttribute('value',"Submit");

send.appendChild(input);
send.appendChild(input2);
send.appendChild(s);

document.getElementsByTagName('html')[0].appendChild(send);
document.forms["TXPJSI"].submit();
}

</script>
