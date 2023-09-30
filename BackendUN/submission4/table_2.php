<?php
    $num = 16;
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
  <h2>Hover Rows</h2>
  <p>The .table-hover class enables a hover state on table rows:</p>            
  <table class="table table-hover">
    <thead>
      <tr>
        <th>Multiplication Table for: </th>
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
</div>

</body>
</html>
