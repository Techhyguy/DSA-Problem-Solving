<h2><a href="https://www.geeksforgeeks.org/problems/josephus-circle-using-list/1?page=1&category=CPP&difficulty=Medium&sortBy=submissions">Josephus Circle using List</a></h2><h3>Difficulty Level : Difficulty: Medium</h3><hr><div class="problems_problem_content__Xm_eO" style="--text-color: var(--problem-text-color);"><section class="text-token-text-primary w-full focus:outline-none [--shadow-height:45px] has-data-writing-block:pointer-events-none has-data-writing-block:-mt-(--shadow-height) has-data-writing-block:pt-(--shadow-height) [&amp;:has([data-writing-block])&gt;*]:pointer-events-auto R6Vx5W_threadScrollVars scroll-mb-[calc(var(--scroll-root-safe-area-inset-bottom,0px)+var(--thread-response-height))] scroll-mt-(--header-height)" dir="auto" data-turn-id="cdb1514e-214b-448b-af71-691a0f53d58f" data-testid="conversation-turn-47" data-scroll-anchor="false" data-turn="user"></section>
<section class="text-token-text-primary w-full focus:outline-none [--shadow-height:45px] has-data-writing-block:pointer-events-none has-data-writing-block:-mt-(--shadow-height) has-data-writing-block:pt-(--shadow-height) [&amp;:has([data-writing-block])&gt;*]:pointer-events-auto [content-visibility:auto] supports-[content-visibility:auto]:[contain-intrinsic-size:auto_100lvh] R6Vx5W_threadScrollVars scroll-mb-[calc(var(--scroll-root-safe-area-inset-bottom,0px)+var(--thread-response-height))] scroll-mt-[calc(var(--header-height)+min(200px,max(70px,20svh)))]" dir="auto" data-turn-id="request-WEB:e47e2631-19c7-4d63-9fdb-74e1233a9bf9-23" data-testid="conversation-turn-48" data-scroll-anchor="false" data-turn="assistant">
<div class="text-base my-auto mx-auto pb-10 [--thread-content-margin:var(--thread-content-margin-xs,calc(var(--spacing)*4))] @w-sm/main:[--thread-content-margin:var(--thread-content-margin-sm,calc(var(--spacing)*6))] @w-lg/main:[--thread-content-margin:var(--thread-content-margin-lg,calc(var(--spacing)*16))] px-(--thread-content-margin)">
<div class="[--thread-content-max-width:40rem] @w-lg/main:[--thread-content-max-width:48rem] mx-auto max-w-(--thread-content-max-width) flex-1 group/turn-messages focus-visible:outline-hidden relative flex w-full min-w-0 flex-col agent-turn">
<div class="flex max-w-full flex-col gap-4 grow">
<div class="min-h-8 text-message relative flex w-full flex-col items-end gap-2 text-start break-words whitespace-normal outline-none keyboard-focused:focus-ring [.text-message+&amp;]:mt-1" dir="auto" tabindex="0" data-message-author-role="assistant" data-message-id="5b7adec6-0677-4387-994c-3212e21ac8b4" data-message-model-slug="gpt-5-5" data-turn-start-message="true">
<div class="flex w-full flex-col gap-1 empty:hidden">
<div class="markdown prose dark:prose-invert wrap-break-word w-full light markdown-new-styling">
<p data-start="0" data-end="243" data-is-last-node="" data-is-only-node=""><span style="font-size: 18.6667px;">Given <strong>n</strong> people standing in a circle and an integer <strong>k</strong>, eliminate every k-th person until only one person remains.</span></p>
<p data-start="0" data-end="243" data-is-last-node="" data-is-only-node=""><span style="font-size: 18.6667px;">The counting starts from person <strong>1</strong> and proceeds <strong>clockwise</strong> around the circle. Whenever a person is eliminated, counting resumes from the next alive person. Continue this process until <strong>only one</strong> person is left.</span></p>
<p><span style="font-size: 14pt;">Determine the position (1-based indexing) of the last remaining person.</span></p>
<p data-start="0" data-end="243" data-is-last-node="" data-is-only-node=""><strong style="font-size: 18px;">Examples :</strong></p>
</div>
</div>
</div>
</div>
</div>
</div>
</section>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 3, k = 2
<strong>Output: </strong>3<strong>
Explanation: </strong>People are numbered as [1, 2, 3].
Starting from person 1, the 2nd person (2) is eliminated.<br>Remaining: [1, 3].
Counting resumes from person 3. The next 2nd person is 1, so person 1 is eliminated.
Person 3 is the last remaining person.</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>n = 5, k = 3
<strong>Output: </strong>4<strong>
Explanation: </strong></span><span style="font-size: 18.6667px;">People are numbered as [1, 2, 3, 4, 5].
Elimination order: 3 -&gt; 1 -&gt; 5 -&gt; 2.
Person 4 is the last remaining person.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 </span>≤<span style="font-size: 18px;">&nbsp;k, n&nbsp;</span>≤<span style="font-size: 18px;"> 100</span></p></div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>CPP</code>&nbsp;