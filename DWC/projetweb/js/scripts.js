let xmlhttp = new XMLHttpRequest();
    function loadXMLDoc() {
        xmlhttp.onreadystatechange = function () {
            if (xmlhttp.readyState == 4 && xmlhttp.status == 200) {
                fetchData();
            }
        };
        xmlhttp.open("GET", "https://obiwan.univ-brest.fr/~e22103667/data/bdd.xml", true);
        xmlhttp.send();
    }



    function fetchData() {
        let i;
        let xmlDoc = xmlhttp.responseXML;
        let table = "<tr><th>questions</th><th>questions</th></tr>";
        let x = xmlDoc.getElementsByTagName("question");
        for (i = 0; i < x.length; i++) {
            table += "<tr><td>" +
            x[i].getElementsByTagName("question_text")[0].textContent +
            "</td><td>";

            let a = xmlDoc.getElementsByTagName("reponses");
            for(i = 0; i< a.length; i++){
                
                table += "<tr><td>" +
                a[i].getElementsByTagName("reponse")[0].textContent +
            "</td><td>";
                
            }
        }
        document.getElementById("data").innerHTML = table;
    } 