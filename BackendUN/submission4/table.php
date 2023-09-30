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
  <h2>Hover Rows</h2>
  <p>The .table-hover class enables a hover state on table rows:</p>            
  <table class="table table-hover">
    <thead>
    <?php
      $number=13;
      function color(){
        $rand = array('3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd');
        $color = '#'.$rand[rand(0,10)].$rand[rand(0,10)].$rand[rand(0,10)].$rand[rand(0,10)].$rand[rand(0,10)].$rand[rand(0,10)];
        return $color;
      }
    ?>
      <tr>
        <th>Multiplication Table for: <?php echo $number;?></th>
      </tr>
    </thead>
    <tbody>
    <?php
      for ($i=0; $i<=10; $i++)
      {
        $color= color();
    ?>
      <tr>
        <td>
          <?php
          $result = $number * $i; 
          echo  "<p style=color:$color><strong>$number x $i = $result</strong></p>";
          echo "<br>";
          }
          ?>
        </td>
      </tr>
    </tbody>
  </table>
</div>

</body>
</html>
