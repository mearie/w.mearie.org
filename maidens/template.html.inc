<!DOCTYPE html>
<html lang="$if(lang)$$lang$$else$ko$endif$">
<head>
  <meta charset="utf-8" />
  <meta name="generator" content="pandoc" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0, user-scalable=no">
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
  <title>$if(lang)$Eternal Shrine Maidens$else$산속 무녀들의 비밀$endif$ - $pagetitle$</title>
  <script>(function() {
    if (window.location.protocol === 'file:') return;
    const preferred = sessionStorage.getItem('preferred-lang');
    const langs = preferred ? [preferred] : navigator.languages || [navigator.language || navigator.userLanguage];
    const koIndex = langs.findIndex(l => l.startsWith('ko'));
    const enIndex = langs.findIndex(l => l.startsWith('en'));
$if(lang)$
    if (koIndex !== -1 && (enIndex === -1 || koIndex < enIndex)) {
      const path = window.location.pathname;
      const filename = path.substring(path.lastIndexOf('/') + 1);
      window.location.replace('../' + filename);
    }
$else$
    if (enIndex !== -1 && (koIndex === -1 || enIndex < koIndex)) {
      const path = window.location.pathname;
      const filename = path.substring(path.lastIndexOf('/') + 1);
      if (/^(\d+|guide|guide-letter|extra|prompts|index)\.html$$/.test(filename)) {
        window.location.replace('en/' + filename);
      }
    }
$endif$
  })()</script>
  <script src="https://cdn.tailwindcss.com"></script>
$if(lang)$
  <link href="https://fonts.googleapis.com/css2?family=Spectral:ital,wght@0,400;0,700;1,400&display=swap" rel="stylesheet">
  <link rel="stylesheet" href="../styles.css" />
$else$
  <link href="https://fonts.googleapis.com/css2?family=Nanum+Myeongjo:wght@400;700&display=swap" rel="stylesheet">
  <link rel="stylesheet" href="styles.css" />
$endif$
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
    <header class="p-6 sm:p-8 md:p-10 pb-4 border-b border-gray-200 flex justify-between items-center">
      <h1 class="text-xl font-bold text-gray-800" style="color: #2f4f4f;">
$if(lang)$
        Eternal Shrine Maidens
$else$
        산속 무녀들의 비밀
$endif$
      </h1>
      <a href="index.html" class="nav-button">
        <svg xmlns="http://www.w3.org/2000/svg" class="h-4 w-4" fill="none" viewBox="0 0 24 24" stroke="currentColor" stroke-width="2">
          <path stroke-linecap="round" stroke-linejoin="round" d="M10 19l-7-7m0 0l7-7m-7 7h18" />
        </svg>
$if(lang)$
        Back
$else$
        뒤로 가기
$endif$
      </a>
    </header>

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

      <nav class="pager-nav">
$if(prev)$
        <a href="$prev$" class="nav-button">
$else$
        <a class="nav-button opacity-50 cursor-not-allowed">
$endif$
          <svg xmlns="http://www.w3.org/2000/svg" class="h-4 w-4" fill="none" viewBox="0 0 24 24" stroke="currentColor" stroke-width="2">
            <path stroke-linecap="round" stroke-linejoin="round" d="M15 19l-7-7 7-7" />
          </svg>
$if(lang)$
          Previous chapter
$else$
          이전 장
$endif$
        </a>
$if(next)$
        <a href="$next$" class="nav-button">
$else$
        <a class="nav-button opacity-50 cursor-not-allowed">
$endif$
$if(lang)$
          Next chapter
$else$
          다음 장
$endif$
          <svg xmlns="http://www.w3.org/2000/svg" class="h-4 w-4" fill="none" viewBox="0 0 24 24" stroke="currentColor" stroke-width="2">
            <path stroke-linecap="round" stroke-linejoin="round" d="M9 5l7 7-7 7" />
          </svg>
        </a>
      </nav>

$body$

      <nav class="pager-nav">
$if(prev)$
        <a href="$prev$" class="nav-button">
$else$
        <a class="nav-button opacity-50 cursor-not-allowed">
$endif$
          <svg xmlns="http://www.w3.org/2000/svg" class="h-4 w-4" fill="none" viewBox="0 0 24 24" stroke="currentColor" stroke-width="2">
            <path stroke-linecap="round" stroke-linejoin="round" d="M15 19l-7-7 7-7" />
          </svg>
$if(lang)$
          Previous chapter
$else$
          이전 장
$endif$
        </a>
$if(next)$
        <a href="$next$" class="nav-button">
$else$
        <a class="nav-button opacity-50 cursor-not-allowed">
$endif$
$if(lang)$
          Next chapter
$else$
          다음 장
$endif$
          <svg xmlns="http://www.w3.org/2000/svg" class="h-4 w-4" fill="none" viewBox="0 0 24 24" stroke="currentColor" stroke-width="2">
            <path stroke-linecap="round" stroke-linejoin="round" d="M9 5l7 7-7 7" />
          </svg>
        </a>
      </nav>

$for(include-after)$
$include-after$
$endfor$

    </section>

    <footer class="text-center footer">
      <script>
        function switchTo(lang) {
          sessionStorage.setItem('preferred-lang', lang);
          const [, filename] = window.location.pathname.match(/\/([^\/]*)$$/);
          const path = (lang === 'ko' ? filename : lang + '/' + filename);
$if(lang)$
          window.location.replace('../' + path);
$else$
          window.location.replace('./' + path);
$endif$
          return false;
        }
      </script>
$if(lang)$
      <p><button onclick="return switchTo('ko')" class="text-blue-700 hover:underline">한국어</button> &middot; &copy; 2025 Kang Seonghoon. Some Rights Reserved.</p>
$else$
      <p><button onclick="return switchTo('en')" class="text-blue-700 hover:underline">English</button> &middot; &copy; 2025 강 성훈. 일부 권리 보유.</p>
$endif$
    </footer>
  </div>
</body>
</html>
