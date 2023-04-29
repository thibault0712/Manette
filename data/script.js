function onLowBattery() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "onLowBattery", true); //true pour requête asynchrone
    xhttp.send();
}

function offLowBattery() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "offLowBattery", true); //true pour requête asynchrone
    xhttp.send();
}

function onImmobilizedVehicle() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "onImmobilizedVehicle", true); //true pour requête asynchrone
    xhttp.send();
}

function offImmobilizedVehicle() {
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "offImmobilizedVehicle", true); //true pour requête asynchrone
    xhttp.send();
}

function getPassword() {
  var errorLenght = document.getElementById("errorLenght");
  var warningConnection = document.getElementById("warningConnection");
  var success = document.getElementById("success");
  var password = document.getElementById("password").value;
  success.style.display = "none";
  if (password.length < 8) {
    errorLenght.style.display = "inline-block";
    warningConnection.style.display = "none";
    return;
  }
  errorLenght.style.display = "none";
  warningConnection.style.display = "inline-block";
  var xhttp = new XMLHttpRequest();
  xhttp.open("GET", "setNewPassword?password=" + password, true); //Ajoutez le paramètre password à l'URL
  xhttp.send();
}

function getVehicleIdentifier() {
  var errorLenght = document.getElementById("errorLenght");
  var warningConnection = document.getElementById("warningConnection");
  var success = document.getElementById("success");
  var vehicleIdentifier = document.getElementById("vehicleIdentifier").value;
  errorLenght.style.display = "none";
  warningConnection.style.display = "none";
  success.style.display = "inline-block";
  var xhttp = new XMLHttpRequest();
  xhttp.open("GET", "setVehicleIdentifier?vehicleIdentifier=" + vehicleIdentifier, true); //Ajoutez le paramètre password à l'URL
  xhttp.send();
}

function percentage() {
    var errorLenght = document.getElementById("errorLenght");
    var warningConnection = document.getElementById("warningConnection");
    var success = document.getElementById("success");
    errorLenght.style.display = "none";
    warningConnection.style.display = "none";
    success.style.display = "inline-block";
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "percentage", true); //true pour requête asynchrone
    xhttp.send();
}

function kmH() {
    var errorLenght = document.getElementById("errorLenght");
    var warningConnection = document.getElementById("warningConnection");
    var success = document.getElementById("success");
    errorLenght.style.display = "none";
    warningConnection.style.display = "none";
    success.style.display = "inline-block";
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "kmH", true); //true pour requête asynchrone
    xhttp.send();
}

function getWeightBike() {
    var errorLenght = document.getElementById("errorLenght");
    var warningConnection = document.getElementById("warningConnection");
    var success = document.getElementById("success");
    errorLenght.style.display = "none";
    warningConnection.style.display = "none";
    success.style.display = "inline-block";
    var weightBike = document.getElementById("weightBike").value;
    var xhttp = new XMLHttpRequest();
    xhttp.open("GET", "setWeightBike?weight=" + weightBike, true); //Ajoutez le paramètre password à l'URL
    xhttp.send();
  }

setInterval(function getData()
{
    var xhttp = new XMLHttpRequest();

    xhttp.onreadystatechange = function()
    {
        if(this.readyState == 4 && this.status == 200)
        {
            document.getElementById("valueSpeed").innerHTML = this.responseText;
        }
    };

    xhttp.open("GET", "readSpead", true);
    xhttp.send();
}, 100);