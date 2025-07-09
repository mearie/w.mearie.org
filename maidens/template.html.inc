<!DOCTYPE html>
<html lang="ko">
<head>
  <meta charset="utf-8" />
  <meta name="generator" content="pandoc" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
$for(author-meta)$
  <meta name="author" content="$author-meta$" />
$endfor$
$if(date-meta)$
  <meta name="dcterms.date" content="$date-meta$" />
$endif$
$if(keywords)$
  <meta name="keywords" content="$for(keywords)$$keywords$$sep$, $endfor$" />
$endif$
$if(description-meta)$
  <meta name="description" content="$description-meta$" />
$endif$
  <title>산속 무녀들의 비밀 - $pagetitle$</title>
  <!-- Tailwind CSS CDN -->
  <script src="https://cdn.tailwindcss.com"></script>
  <!-- Google Fonts - Nanum Myeongjo -->
  <link href="https://fonts.googleapis.com/css2?family=Nanum+Myeongjo:wght@400;700&display=swap" rel="stylesheet">
  <link rel="stylesheet" href="styles.css" />
$for(css)$
  <link rel="stylesheet" href="$css$" />
$endfor$
$for(header-includes)$
  $header-includes$
$endfor$
$if(math)$
  $math$
$endif$
</head>
<body>
  <div class="container mx-auto shadow-xl rounded-xl">
    <!-- Header Section -->
    <header class="p-6 sm:p-8 md:p-10 pb-4 border-b border-gray-200 flex justify-between items-center">
      <h1 class="text-xl font-bold text-gray-800" style="color: #2f4f4f;">산속 무녀들의 비밀</h1>
      <a href="index.html" class="nav-button">
        <svg xmlns="http://www.w3.org/2000/svg" class="h-4 w-4" fill="none" viewBox="0 0 24 24" stroke="currentColor" stroke-width="2">
          <path stroke-linecap="round" stroke-linejoin="round" d="M10 19l-7-7m0 0l7-7m-7 7h18" />
        </svg>
        뒤로 가기
      </a>
    </header>

    <!-- Main Section -->
    <section class="p-6 sm:p-8 md:p-10 pt-6">
$for(include-before)$
$include-before$
$endfor$
$if(title)$
<h1 class="section-title">$title$</h1>
$if(abstract)$
<p class="text-gray-700 mb-8">
$abstract$
</p>
$endif$
$endif$
$if(toc)$
<nav id="$idprefix$TOC" role="doc-toc">
$if(toc-title)$
<h2 id="$idprefix$toc-title">$toc-title$</h2>
$endif$
$table-of-contents$
</nav>
$endif$

      <!-- Top Pager -->
      <nav class="pager-nav">
$if(prev)$
        <a href="$prev$" class="nav-button">
$else$
        <a class="nav-button opacity-50 cursor-not-allowed">
$endif$
          <svg xmlns="http://www.w3.org/2000/svg" class="h-4 w-4" fill="none" viewBox="0 0 24 24" stroke="currentColor" stroke-width="2">
            <path stroke-linecap="round" stroke-linejoin="round" d="M15 19l-7-7 7-7" />
          </svg>
          이전 장
        </a>
$if(next)$
        <a href="$next$" class="nav-button">
$else$
        <a class="nav-button opacity-50 cursor-not-allowed">
$endif$
          다음 장
          <svg xmlns="http://www.w3.org/2000/svg" class="h-4 w-4" fill="none" viewBox="0 0 24 24" stroke="currentColor" stroke-width="2">
            <path stroke-linecap="round" stroke-linejoin="round" d="M9 5l7 7-7 7" />
          </svg>
        </a>
      </nav>

$body$

      <!-- Bottom Pager -->
      <nav class="pager-nav">
$if(prev)$
        <a href="$prev$" class="nav-button">
$else$
        <a class="nav-button opacity-50 cursor-not-allowed">
$endif$
          <svg xmlns="http://www.w3.org/2000/svg" class="h-4 w-4" fill="none" viewBox="0 0 24 24" stroke="currentColor" stroke-width="2">
            <path stroke-linecap="round" stroke-linejoin="round" d="M15 19l-7-7 7-7" />
          </svg>
          이전 장
        </a>
$if(next)$
        <a href="$next$" class="nav-button">
$else$
        <a class="nav-button opacity-50 cursor-not-allowed">
$endif$
          다음 장
          <svg xmlns="http://www.w3.org/2000/svg" class="h-4 w-4" fill="none" viewBox="0 0 24 24" stroke="currentColor" stroke-width="2">
            <path stroke-linecap="round" stroke-linejoin="round" d="M9 5l7 7-7 7" />
          </svg>
        </a>
      </nav>

$for(include-after)$
$include-after$
$endfor$

    </section>

    <!-- Footer Section -->
    <footer class="text-center footer">
      <p>&copy; 2025 강 성훈. 일부 권리 보유.</p>
    </footer>
  </div>
</body>
</html>
