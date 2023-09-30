<?php
    #$num = 16;
    session_start();
    $repeat = false;
    $invalid = false;
    if($_SERVER['REQUEST_METHOD'] == 'POST'){
      $num = $_POST["num"];
      ##once received once by server save as a session global
      ##try it with a closed and an open session
      $_SESSION["num"]=$num;
    }
    else{
      if(isset($_SESSION["num"])){
        $repeat=true;
        $num = $_SESSION["num"];
      }
      else{
        $invalid=true;
      }
    }
    #session_destroy();##uncomment to allow number to be received only once per session
?>

<!DOCTYPE html>
<html lang="en">
<head>
  <title>Multiplication Table</title>
  <meta charset="utf-8">
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/css/bootstrap.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.6.4/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.4.1/js/bootstrap.min.js"></script>
</head>
<body>

<div class="container">
  <?php
    if($invalid==false){
    ?>
  <h2>Hover Rows</h2>
  <p>The .table-hover class enables a hover state on table rows:</p>
  <p><strong>
    <?php 
    if($repeat == true){
      echo "Repeated request, same number per session";
    }
    ?>
  </strong>  
  </p>            
  <table class="table table-hover">
    <thead>
      <tr>
        <th>Multiplication Table for: <?php echo $num;?></th>
      </tr>
    </thead>
    <tbody>
    <?php
        for($x = 1; $x <= 10; $x++){
            $result = $x . " X " . $num . " = " . ($x * $num);
    ?>
      <tr>
        <td><?php echo $result ?></td>
      </tr>
    <?php
        }
    ?>
    </tbody>
  </table>
  <?php
    }
    else{
  ?>
  <p><strong>
    <?php 
      echo "Invalid request";
    }
    ?>
  </strong>  
  </p>
</div>

</body>
</html>
