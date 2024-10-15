let xmlhttp = new XMLHttpRequest();
    function loadXMLDoc() {
        xmlhttp.onreadystatechange = function () {
            if (xmlhttp.readyState == 4 && xmlhttp.status == 200) {
                fetchData();
            }
        };
        xmlhttp.open("GET", "https://phobos.univ-brest.fr/media/edu/kx07kar7/book_catalog.xml", true);
        xmlhttp.send();
    }



    function fetchData() {
        let i;
        let xmlDoc = xmlhttp.responseXML;
        let table = "<tr><th>Book</th><th>Authors</th></tr>";
        let x = xmlDoc.getElementsByTagName("BOOK");
        for (i = 0; i < x.length; i++) {
            table += "<tr><td>" +
            x[i].getElementsByTagName("TITLE")[0].textContent +
            "</td><td>" +
            x[i].getElementsByTagName("AUTHOR")[0].textContent +
            "</td>" +            
            "</tr>";
        }
        document.getElementById("data").innerHTML = table;
    } 