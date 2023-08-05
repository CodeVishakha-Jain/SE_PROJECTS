
<h3 align="center"> <u>Module(HTML5)-3</u></h3>


* What are the new tags added in HTML5?
    - &lt;header&gt;: Represents the header of a section or a page.
    - &lt;nav&gt;: Represents a navigation menu.
    - &lt;main&gt;: Represents the main content of the document, excluding headers, footers, and sidebars.
    - &lt;section&gt;: Represents a generic section within a document.
    - &lt;article&gt;: Represents a self-contained piece of content that could be distributed independently from the rest of the content.
    - &lt;aside&gt;: Represents content that is tangentially related to the content around it, such as sidebars or pull quotes.
    - &lt;footer&gt;: Represents the footer of a section or a page.
    - &lt;video&gt;: Embeds a video file into the document.
    - &lt;audio&gt;: Embeds audio content into the document.
    - &lt;canvas&gt;: Provides a space on which you can use JavaScript to create graphics, animations, or other visual images.
    - &lt;svg&gt;: Embeds Scalable Vector Graphics content directly in the document.
    - &lt;datalist&gt;: Provides a pre-defined list of options for an &lt;input&gt; element.
    - &lt;progress&gt;: Represents the progress of a task, such as loading data or completing a form.
    - &lt;details&gt;: Creates a disclosure widget in which information can be shown or hidden.
    - &lt;summary&gt;: Represents a summary or caption for the content within a &lt;details&gt; element.
    - &lt;mark&gt;: Highlights text to indicate a reference or significance.
    - &lt;time&gt;: Represents a specific time or a range of time.
    - &lt;meter&gt;: Represents a scalar measurement within a known range.
    - &lt;output&gt;: Represents the result of a calculation or user action.
    -----
* How to embed audio and video in a webpage?
    - To embed audio and video in a webpage, you can use the HTML &lt;audio&gt; and &lt;video&gt; elements, respectively. These elements allow you to add multimedia content directly to your HTML document, and you can specify various sources to support different formats and browsers.
    - Embedding Audio:
    ```
    <audio controls>
        <source src="audio-file.mp3" type="audio/mpeg">
        <source src="audio-file.ogg" type="audio/ogg">
        Your browser does not support the audio element.
    </audio>
    ```
    - Embedding Video:
    ```
    <video controls width="640" height="360">
        <source src="video-file.mp4" type="video/mp4">
        <source src="video-file.webm" type="video/webm">
        Your browser does not support the video element.
    </video>
    ```
    ----
* Semantic element in HTML5?

    - semantic elements help define the purpose and context of the content within a web page. These elements improve the accessibility, search engine optimization (SEO), and maintainability of web documents.

    - Here are some commonly used semantic elements in HTML5:

    - &lt;header&gt;: Represents the header of a section or a page. It often includes a logo, navigation menu, and introductory content.

    - &lt;nav&gt;: Represents a navigation menu, typically used to provide links to other pages or sections of the website.

    - &lt;main&gt;: Represents the main content of the document, excluding headers, footers, and sidebars.

    - &lt;section&gt;: Represents a thematic grouping of content within a document. It can be used to divide the content into distinct parts.

    - &lt;article&gt;: Represents a self-contained piece of content that could be distributed independently from the rest of the content. Examples include blog posts, news articles, or forum posts.

    - &lt;aside&gt;: Represents content that is tangentially related to the content around it, such as sidebars or pull quotes.

    - &lt;footer&gt;: Represents the footer of a section or a page. It often contains copyright information, contact details, and related links.

    - &lt;figure&gt;: Represents any content that is referenced from the main content, such as images, diagrams, audio, or video.

    - &lt;figcaption&gt;: Represents the caption or description of a &lt;figure&gt; element.

    - &lt;time&gt;: Represents a specific time or a range of time. It can be used to mark dates, times, or durations.

    - &lt;mark&gt;: Highlights text to indicate a reference or significance.

    - &lt;address&gt;: Represents contact information for the author or owner of the document.

    - These semantic elements help browsers, search engines, screen readers, and other assistive technologies understand the structure and meaning of the content, leading to better accessibility and improved user experience. It is important to use semantic elements appropriately to create well-structured and meaningful HTML documents.
    ----
* Canvas and SVG tags

    - Both &lt;canvas&gt; and &lt;svg&gt; are HTML5 elements used for creating graphics and visual content within web pages, but they have different approaches and use cases.

    - &lt;canvas&gt;:
    - The &lt;canvas&gt; element provides a drawing space on which you can use JavaScript to create dynamic and interactive graphics, animations, and other visual elements.
    - It is essentially a bitmap-based drawing surface that allows you to draw and manipulate pixels directly using JavaScript.
   -  Canvas graphics are usually created programmatically by using the Canvas API, which provides methods for drawing paths, shapes, text, images, and more.
    - Since canvas is pixel-based, the graphics are resolution-dependent, and resizing the canvas element will scale the graphics accordingly.
    - Example usage:
    ```
    <canvas id="myCanvas" width="400" height="200"></canvas>
    <script>
        const canvas = document.getElementById('myCanvas');
        const ctx = canvas.getContext('2d');

        // Drawing a rectangle
        ctx.fillStyle = 'blue';
        ctx.fillRect(50, 50, 100, 100);
    </script>
    ```
    - &lt;svg&gt;:
    - The &lt;svg&gt; element is used to embed Scalable Vector Graphics (SVG) directly in the HTML document.
    - SVG is a vector-based format, meaning graphics are defined using mathematical equations and geometric shapes, making them resolution-independent and scalable without losing quality.
    - SVG graphics can be created manually using XML-based markup or generated programmatically using JavaScript.
    - SVG is well-suited for creating static graphics, icons, charts, diagrams, and animations.
    - Example usage:
    ```
    <svg width="400" height="200">
        <rect x="50" y="50" width="100" height="100" fill="blue" />
    </svg>
    ```
    ----
