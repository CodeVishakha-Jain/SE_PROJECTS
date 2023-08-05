
<h3 align="center"> <u>Module (JQuery Basic, Effects & Advanced) – 5</u></h3>


* What is jQuery?
    - jQuery is a lightweight, "write less, do more", JavaScript library.

    - The purpose of jQuery is to make it much easier to use JavaScript on your website.

    - jQuery takes a lot of common tasks that require many lines of JavaScript code to accomplish, and wraps them into methods that you can call with a single line of code.

    - jQuery also simplifies a lot of the complicated things from JavaScript, like AJAX calls and DOM manipulation.

    - The jQuery library contains the following features:

      - HTML/DOM manipulation
      - CSS manipulation
      - HTML event methods
      - Effects and animations
      - AJAX
      - Utilities
    -----
* How to Apply CSS Using JQuery, How to Add Class and Remove Class in Jquery ,JQuery Animation?
    - Applying CSS Using jQuery:
      - jQuery provides several methods to apply CSS styles to elements. You can use the .css() method to set or get CSS properties of elements.
      - Syntax:
      ```
        $(selector).css(property, value);
      ```

    - Adding and Removing Classes in jQuery:
      - In jQuery, you can use the .addClass() method to add a class to selected elements and the .removeClass() method to remove a class from selected elements. Both methods are useful for dynamically modifying the class attribute of HTML elements on your webpage.

      - Here's how to add and remove classes using jQuery:

      - Adding a Class:
      Use the .addClass() method to add one or more classes to selected elements.

      - Syntax:
  
        ```
        $(selector).addClass(className1, className2, ...);
        ```
       - removing a Class:
        Use the .removeClass() method to remove one or more classes to selected elements.

        - Syntax:
  
            ```
            $(selector).removeClass(className1, className2, ...);
            ```
        
    - JQuery animation:
      - jQuery provides a range of animation methods to create smooth and dynamic effects on HTML elements. These methods allow you to animate the appearance, disappearance, and various other properties of elements on your webpage. Some common jQuery animation methods include .show(), .hide(), .fadeIn(), .fadeOut(), .slideDown(), and .slideUp().
    ----
* How to create slider with animation?

    ```
    <!DOCTYPE html>
    <html lang="en">
    <head>
        <meta charset="UTF-8">
        <meta name="viewport" content="width=device-width, initial-scale=1.0">
        <title>Document</title>
        <!-- for getting the jquery from cdn you have to go to google and goto jquery cdn and goto cdnjs and copy the link and paste it in script src -->
        <script src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.7.0/jquery.min.js"></script>
        <style>
            .img
            {
                height:200px;
                width:500px;
                background-image: url("https://www.shutterstock.com/image-photo/assortment-various-barbecue-vegan-food-260nw-1738904081.jpg");
                background-repeat: repeat;
            }
        </style>
    </head>
    <body>
        <div class="main">
            <div class="img"></div>
        </div>
        <script>
            $(document).ready(function () {
                $(".img").animate({
                    backgroundPositionX: '0px',
                    backgroundPositionY: '0'
                });
                $(".img").animate({
                    backgroundPositionX: '100px',
                    backgroundPositionY: '0'
                });
                $(".img").animate({
                    backgroundPositionX: '200px',
                    backgroundPositionY: '0'
                });
                $(".img").animate({
                    backgroundPositionX: '300px',
                    backgroundPositionY: '0'
                });
                $(".img").animate({
                    backgroundPositionX: '400px',
                    backgroundPositionY: '0'
                });
                $(".img").animate({
                    backgroundPositionX: '500px',
                    backgroundPositionY: '0'
                });
                $(".img").animate({
                    backgroundPositionX: '600px',
                    backgroundPositionY: '0'
                });
            });
        </script>
    </body>
    </html>
    ```
    ----
