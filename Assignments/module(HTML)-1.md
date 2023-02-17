
<h3 align="center"> Web Designing Assignment</h3>
<h4 align="center"> Term-1</h4>
<h3 align="center"> <u>Module(HTML)-1</u></h3>


* Are the HTML tags and elements the same thing?
    - No, HTML elements and tags are not the same thing.
    
    - HTML Tags: Tags are the starting and ending parts of an HTML element. They begin with < symbol and end with > symbol. Whatever written inside < and > are called tags.
        `<b> </b>`

    - HTML elements: Elements enclose the contents in between the tags. They consist of some kind of structure or expression. It generally consists of a start tag, content and an end tag.
        `<b>This is the content.</b>`
    -----
* What are tags and attributes in HTML?
    - HTML Tags: Tags are the starting and ending parts of an HTML element. They begin with < symbol and end with > symbol. Whatever written inside < and > are called tags.
        `<b> </b>`

    - HTML Attributes: It is used to define the character of an HTML element. It always placed in the opening tag of an element. It generally provides additional styling (attribute) to the element.
        `<p align="center">This is paragraph.</p>`
    ----
* What are void elements in HTML?

    - A void element is an element whose content model never allows it to have contents under any circumstances. Void elements can have attributes. The following is a complete list of the void elements in HTML : area , base , br , col , command , embed , hr , img , input , keygen , link , meta , param , source , track , wbr.
    ----
* What are HTML Entities?
    - Some characters are reserved in HTML.

    - If you use the less than (<) or greater than (>) signs in your text, the browser might mix them with tags.

    - Character entities are used to display reserved characters in HTML.

    - A character entity looks like this:

      - &entity_name;
      OR
      &#entity_number;
      To display a less than sign (<) we must write: `&lt; or &#60`;

         examples : `&nbsp;,&lt;,&gt;,&amp;,&quot;,&apos;,&cent;`,etc..
    ----
* What are different types of lists in HTML?
    - HTML Lists are used to specify lists of information. All lists may contain one or more list elements. There are three different types of HTML lists:

      - Ordered List or Numbered List (ol)
      - Unordered List or Bulleted List (ul)
      - Description List or Definition List (dl)
    ----
* What is 'class' attribute in HTML?
    - The HTML class attribute is used to specify a class for an HTML element.

    - Multiple HTML elements can share the same class.

    - The HTML class attribute is used to specify a class for an HTML element.

    - Multiple HTML elements can share the same class.

   ```html
        <div class="city">
            <h2>London</h2>
            <p>London is the capital of England.</p>
        </div>
   ```
    ---
* What is difference between the 'id' attribute and the 'class' attribute of HTML elements?
    - We can apply a class to various elements so that it could be numerous times on a single page.

    - The Id is unique in a page, and we can only apply it to one specific element.

    - The class is assigned to an element and its name starts with "." followed by the name of the class in applying styles.

    - The name of the Id starts with the "#" symbol followed by a unique id name in applying styles.

    - We can attach multiple class selectors to an element.

    - We can attach only one ID selector to an element.
    ----
* What are the various formatting tags in HTML?
    - Formatting tags were designed to display special types of text:
    `<b>` - Bold text
    `<strong>` - Important text
    `<i>` - Italic text
    `<em>` - Emphasized text
    `<mark>` - Marked text
    `<small>` - Smaller text
    `<del>` - Deleted text
    `<ins>` - Inserted text
    `<sub>` - Subscript text
    `<sup>` - Superscript text
    ----
* How is Cell Padding different from Cell Spacing?
    - Cellpadding basically defines the space present between a table cell's border and the content present in it. Cellspacing basically defines the space present between individual adjacent cells.
    ----
* How can we club two or more rows or columns into a single row or column in an HTML table?
    - It can be done by using the rowspan and colspan attribute in HTML. The rowspan is used to merge or combine the number of cells in a row whereas the colspan is used to merge column cells in a table.
    ----
* What is the difference between a block-level element and an inline element?
    - Block-level Elements
      - A block-level element always starts on a new line, and the browsers automatically add some space (a margin) before and after the element.

      - A block-level element always takes up the full width available (stretches out to the left and right as far as it can).

      - Two commonly used block elements are: `<p>` and `<div>`.

      - The <p> element defines a paragraph in an HTML document.

      - The <div> element defines a division or a section in an HTML document.

    - Inline Elements
      - An inline element does not start on a new line.

      - An inline element only takes up as much width as necessary.

      - This is a <span> element inside a paragraph.
    ----
* How to create a Hyperlink in HTML?
    - To make a hyperlink in an HTML page, use the `<a>` and `</a>` tags, which are the tags used to define the links. The `<a>` tag indicates where the hyperlink starts and the </a> tag indicates where it ends. Whatever text gets added inside these tags, will work as a hyperlink. Add the URL for the link in the `<a href=” ”>`.
    ----
* What is the use of an iframe tag?
    - An HTML iframe is used to display a web page within a web page.

    - The HTML `<iframe>` tag specifies an inline frame.

    - An inline frame is used to embed another document within the current HTML document.

   ```html
        <iframe src="url" title="description"></iframe>
   ```
    ----
* What is the use of a span tag?Explain with example? 
    - The `<span>` tag is an inline container used to mark up a part of a text, or a part of a document.

    - The `<span>` tag is easily styled by CSS or manipulated with JavaScript using the class or id attribute.

    - The `<span>` tag is much like the <div> element, but `<div>` is a block-level element and `<span>` is an inline element.

    - Example:
      - A `<span>` element which is used to color a part of a text:

      ``` html 
      <!DOCTYPE html>
      <html>
      <body>
      <h1>The span element</h1>
      <p>My mother has <span style="color:red;font-weight:bold">blue</span> eyes and my father has <span style="color:darkolivegreen;font-weight:bold">dark green</span> eyes.</p>
      </body>
      </html> 
      ```
    ----
* How to insert a picture into a background image of a web page?
    - Example
      ``` html
      <!DOCTYPE html>
      <html lang="en">
      <head>
          <title>Website</title>
          <style>
              body{
                  background-image:url(
      "https://media.geeksforgeeks.org/wp-content/cdn-uploads/20190710102234/download3.png");
              }
          </style>
      </head>
      <body>
          <h1>GeeksforGeeks</h1>
          <h2>Background Image</h2>
      </body>
      </html>
      ```
    ----
* How are active links different from normal links?
    - Normal links are links which are there on the page and have not been clicked yet. Active links are those links, which have just been clicked at that instant.

* What are the different tags to separate sections of text?
    - There are three tags that can be used to separate the texts:
      - `<br>` tag – Usually `<br>` tag is used to separate the line of text. It breaks the current line and conveys the flow to the next line.
      - `<p>` tag – This contains the text in the form of a new paragraph.
      - `<blockquote>` tag – It is used to define a large quoted section.
    ----
* What is SVG?
    - SVG stands for Scalable Vector Graphics.

    - SVG defines vector-based graphics in XML format.

      ``` html
      <html>
      <body>
      <h1>My first SVG</h1>
      <svg width="100" height="100">
        <circle cx="50" cy="50" r="40" stroke="green" stroke-width="4" fill="yellow" />
      </svg>
      </body>
      </html>
      ```
    ----
* What is difference between HTML and XHTML?
    - XHTML is almost identical to HTML but it is stricter than HTML. XHTML is HTML defined as an XML application. It is supported by all major browsers. Although XHTML is almost the same as HTML but It is more important to create your code correctly, because XHTML is stricter than HTML in syntax and case sensitivity.
    ----
* What are logical and physical tags in HTML?
    - Logical Tags  :
      - Logical Tags are used in HTML to display the text according to the logical styles. Following are the Logical tags commonly used in HTML.

      - Logical Tags
      - Tag	Description
        - `<abbr>`	Defines an abbreviation
        - `<acronym>`	Defines an acronym
        - `<address>`	Defines an address element
        - `<cite>`	Defines citation
        - `<code>`	Defines computer code text
        - `<blockquote>`	Defines a long quotation
        - `<del>`	Defines text
  
    - Physical Tags:
      - Physical Tags are used in HTML to provide actual physical formatting to the text. Following are the Physical tags commonly used in HTML.

      - Physical Tags
      - Tag	Description
        - `<b>`	Defines bold text
        - `<big>`	Defines big text
        - `<i>`	Defines italic text
        - `<small>`	Defines small text
        - `<sup>`	Defines superscripted text 
----